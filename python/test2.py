from graphviz import Digraph

# Create a new directed graph
dot = Digraph(format='jpg')

# Set node attributes for a professional look
dot.attr(rankdir='TB', size='8', nodesep='0.6', ranksep='0.8', splines='true')
dot.attr('node', shape='box', style='rounded, filled', fillcolor='#E6E6FA', fontname='Arial', fontsize='12')

# Add nodes
dot.node('A', 'User Input Data\n(e.g., travel preferences, text, images)')
dot.node('B', 'Data Preprocessing & Feature Engineering\n(Cleaning & preparing data)')
dot.node('C', 'AI Model Selection & Training\n(Choosing the best ML model)')
dot.node('D', 'Model Evaluation & Optimization\n(Improving accuracy & efficiency)')
dot.node('E', 'Real-time Adaptability & Feedback\n(Adjusting based on new data)')
dot.node('F', 'Final Decision & Output Generation\n(AI-driven recommendations)')

# Add edges (connections)
dot.edge('A', 'B', label='Data Collection')
dot.edge('B', 'C', label='Feature Selection & Transformation')
dot.edge('C', 'D', label='Training & Testing')
dot.edge('D', 'E', label='Fine-tuning & Feedback Integration')
dot.edge('E', 'F', label='Final AI Decision')

# Save and render the flowchart as a JPG
flowchart_path = "ai_ml_flowchart"
dot.render(flowchart_path)

print(f"Flowchart saved as {flowchart_path}.jpg")
