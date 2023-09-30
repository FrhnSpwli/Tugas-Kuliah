import random
import matplotlib.pyplot as plt

def monte_carlo_population_growth(initial_population, years, birth_rate_range, death_rate_range, simulations):
    population_data = []

    for _ in range(simulations):
        population = initial_population
        population_history = [population]

        # Generate random birth rate within the specified range
        birth_rate = random.uniform(birth_rate_range[0], birth_rate_range[1])

        # Generate random death rate within the specified range
        death_rate = random.uniform(death_rate_range[0], death_rate_range[1])

        for year in range(1, years + 1):
            births = int(population * birth_rate)
            deaths = int(population * death_rate)
            population = population + births - deaths
            population_history.append(population)

        population_data.append(population_history)

    return population_data

def plot_population_growth(population_data, years):
    plt.figure(figsize=(10, 6))
    for simulation in population_data:
        plt.plot(range(years + 1), simulation)
    plt.xlabel("Years")
    plt.ylabel("Population")
    plt.title("Monte Carlo Population Growth Prediction")
    plt.grid()
    plt.show()

if __name__ == "__main__":
    initial_population = 273800000
    years_to_predict = 10
    birth_rate_range = (0.0155, 0.0163)  # Range of birth rates
    death_rate_range = (0.00940, 0.00980)  # Range of death rates
    simulations = 10          # Jumlah simulasi

    population_data = monte_carlo_population_growth(initial_population, years_to_predict, birth_rate_range, death_rate_range, simulations)
    
    for simulation_idx, simulation in enumerate(population_data, start=1):
        print(f"Simulation {simulation_idx}:")
        for year, population in enumerate(simulation):
            print(f"Year {year}: Population = {population}")
    
    plot_population_growth(population_data, years_to_predict)