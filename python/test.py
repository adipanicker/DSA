import matplotlib.pyplot as plt
import numpy as np

# Travel platforms
platforms = ['Let\'s Go! AI', 'Booking.com', 'MakeMyTrip', 'Goibibo']

# Cost breakdown for a budget Las Vegas trip (in USD)
hotels = [300, 400, 420, 350]  # Hotel prices
flights = [200, 240, 280, 260]  # Flight prices
activities = [150, 200, 230, 210]  # Activity costs

# Bar width
bar_width = 0.2

# Positions for each group
r1 = np.arange(len(platforms))
r2 = [x + bar_width for x in r1]
r3 = [x + bar_width for x in r2]

# Create bar chart
plt.figure(figsize=(10, 6))

plt.bar(r1, hotels, color='skyblue', width=bar_width, label='Hotels')
plt.bar(r2, flights, color='lightcoral', width=bar_width, label='Flights')
plt.bar(r3, activities, color='lightgreen', width=bar_width, label='Activities')

# Labels and title
plt.xlabel('Travel Platforms', fontweight='bold')
plt.ylabel('Total Cost (USD)', fontweight='bold')
plt.title('Budget-Friendly Travel Comparison: Las Vegas', fontweight='bold')
plt.xticks([r + bar_width for r in range(len(platforms))], platforms)

# Highlight the best budget option (Let's Go!)
plt.axvline(x=-0.3, color='gold', linestyle='--', linewidth=2, label="Best Budget Option: Let's Go!")

# Add legend
plt.legend()

# Save and show the graph
plt.tight_layout()
plt.savefig("budget_comparison.png", format='png')
plt.show()

print("YOOO")