import numpy as np
import skfuzzy as fuzz
from skfuzzy import control as ctrl

# Membuat variabel input
service_quality = ctrl.Antecedent(np.arange(0, 11, 1), 'Service Quality')
food_quality = ctrl.Antecedent(np.arange(0, 11, 1), 'Food Quality')

# Membuat variabel output
tip_amount = ctrl.Consequent(np.arange(0, 26, 1), 'Tip Amount')

# Mendefinisikan himpunan fuzzy untuk setiap variabel
service_quality['Buruk'] = fuzz.trimf(service_quality.universe, [0, 0, 5])
service_quality['Cukup'] = fuzz.trimf(service_quality.universe, [0, 5, 10])
service_quality['Baik'] = fuzz.trimf(service_quality.universe, [5, 10, 10])

food_quality['Buruk'] = fuzz.trimf(food_quality.universe, [0, 0, 5]) 
food_quality['Cukup'] = fuzz.trimf(food_quality.universe, [0, 5, 10])
food_quality['Enak'] = fuzz.trimf(food_quality.universe, [5, 10, 10])

tip_amount['Kecil'] = fuzz.trimf(tip_amount.universe, [0, 0, 13])
tip_amount['Sedang'] = fuzz.trimf(tip_amount.universe, [0, 13, 25])
tip_amount['Besar'] = fuzz.trimf(tip_amount.universe, [13, 25, 25])

# Membuat aturan fuzzy
rule1 = ctrl.Rule(service_quality['Baik'] & food_quality['Enak'], tip_amount['Besar'])
rule2 = ctrl.Rule(service_quality['Buruk'] | food_quality['Buruk'], tip_amount['Kecil'])

# Membuat sistem inferensi fuzzy
tip_ctrl = ctrl.ControlSystem([rule1, rule2])

# Membuat simulator FIS
tip = ctrl.ControlSystemSimulation(tip_ctrl)

# Memasukkan input ke FIS dan menghitung hasilnya
tip.input['Service Quality'] = 10
tip.input['Food Quality'] = 10

tip.compute()

# Mendapatkan hasil
print("Estimated Tip Amount:", tip.output['Tip Amount'])
tip_amount.view(sim=tip)
input("Tekan Enter untuk menutup grafik...")