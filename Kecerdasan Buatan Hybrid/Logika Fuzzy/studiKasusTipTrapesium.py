import numpy as np
import skfuzzy as fuzz
from skfuzzy import control as ctrl

# Membuat variabel input
service_quality = ctrl.Antecedent(np.arange(0, 11, 1), 'Service Quality')
food_quality = ctrl.Antecedent(np.arange(0, 11, 1), 'Food Quality')

# Membuat variabel output
tip_amount = ctrl.Consequent(np.arange(0, 26, 1), 'Tip Amount')

# Mendefinisikan himpunan fuzzy untuk setiap variabel
service_quality['Buruk'] = fuzz.trapmf(service_quality.universe, [0, 0, 2, 5])
service_quality['Cukup'] = fuzz.trapmf(service_quality.universe, [2, 5, 7, 8])
service_quality['Baik'] = fuzz.trapmf(service_quality.universe, [7, 8, 10, 10])

food_quality['Buruk'] = fuzz.trapmf(food_quality.universe, [0, 0, 2, 5])
food_quality['Cukup'] = fuzz.trapmf(food_quality.universe, [2, 5, 7, 8])
food_quality['Enak'] = fuzz.trapmf(food_quality.universe, [7, 8, 10, 10])

tip_amount['Kecil'] = fuzz.trapmf(tip_amount.universe, [0, 0, 5, 10])
tip_amount['Sedang'] = fuzz.trapmf(tip_amount.universe, [5, 10, 15, 20])
tip_amount['Besar'] = fuzz.trapmf(tip_amount.universe, [15, 20, 25, 26])  # Adjusted upper limit

# Membuat aturan fuzzy
rule1 = ctrl.Rule(service_quality['Baik'] & food_quality['Enak'], tip_amount['Besar'])
rule2 = ctrl.Rule(service_quality['Buruk'] | food_quality['Buruk'], tip_amount['Kecil'])

# Membuat sistem inferensi fuzzy
tip_ctrl = ctrl.ControlSystem([rule1, rule2])

# Membuat simulator FIS
tip = ctrl.ControlSystemSimulation(tip_ctrl)

# Memasukkan input ke FIS dan menghitung hasilnya
tip.input['Service Quality'] = 7
tip.input['Food Quality'] = 8

tip.compute()

# Mendapatkan hasil
print("Estimated Tip Amount:", tip.output['Tip Amount'])
tip_amount.view(sim=tip)
input("Tekan Enter untuk menutup grafik...")