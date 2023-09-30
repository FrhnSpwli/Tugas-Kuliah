import simpy
import random

# Definisikan parameter sistem
num_buses = 5  # Jumlah bus yang tersedia
bus_capacity = 20  # Kapasitas setiap bus
interarrival_time = 20  # Interval waktu antara kedatangan bus (dalam waktu satuan)
max_passengers = 15  # Jumlah maksimum penumpang yang tiba di halte
halte_locations = ['Halte A', 'Halte B', 'Halte C']  # Lokasi halte bus

# Inisialisasi lingkungan simulasi
env = simpy.Environment()

# Daftar untuk merekam statistik
waiting_times = []

# Definisikan halte bus
class HalteBus:
    def __init__(self, env, location):
        self.env = env
        self.location = location
        self.queue = simpy.Store(env)
        
    def wait_for_bus(self, passenger):
        yield self.env.timeout(random.randint(1, 5))  # Penumpang tiba dengan interval acak
        yield self.queue.put(passenger)  # Penumpang bergabung dengan antrean
        
# Definisikan bus
class Bus:
    def __init__(self, env, bus_id):
        self.env = env
        self.bus_id = bus_id + 1
        
    def operate(self):
        while True:
            print(f'Bus {self.bus_id} tiba pada waktu {env.now}')
            halte = random.choice(halte_objects)
            yield env.timeout(1)  # Proses naik turun penumpang
            while len(halte.queue.items) > 0:
                passenger = yield halte.queue.get()
                print(f'Bus {self.bus_id} mengambil penumpang di {halte.location} pada waktu {env.now}')
                waiting_time = env.now - passenger.arrival_time
                waiting_times.append(waiting_time)
            print(f'Bus {self.bus_id} berangkat dari {halte.location} pada waktu {env.now}')
            yield env.timeout(5)  # Waktu perjalanan bus

# Fungsi untuk membuat penumpang
def generate_passenger(env, halte):
    passenger_id = 1
    while True:
        yield env.timeout(1)  # Penumpang tiba dengan interval 1 waktu satuan
        if len(halte.queue.items) < max_passengers:
            passenger = Passenger(passenger_id, env.now)
            passenger_id += 1
            env.process(halte.wait_for_bus(passenger))

# Definisikan penumpang
class Passenger:
    def __init__(self, passenger_id, arrival_time):
        self.passenger_id = passenger_id
        self.arrival_time = arrival_time

# Inisialisasi halte bus
halte_objects = [HalteBus(env, location) for location in halte_locations]

# Inisialisasi bus
buses = [Bus(env, bus_id) for bus_id in range(num_buses)]

# Memulai proses penumpang
for halte in halte_objects:
    env.process(generate_passenger(env, halte))

# Memulai proses bus
for bus in buses:
    env.process(bus.operate())

# Jalankan simulasi untuk jangka waktu tertentu
simulation_duration = 100
env.run(until=simulation_duration)

# Hitung dan cetak statistik
avg_waiting_time = sum(waiting_times) / len(waiting_times)
print(f'Rata-rata waktu menunggu: {avg_waiting_time:.2f} waktu satuan')
