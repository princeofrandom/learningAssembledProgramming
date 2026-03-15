import plotly.graph_objects as go

fig = go.Figure(data=go.Cone(x=[0], y=[0], z=[3], u=[0], v=[0], w=[-1],sizemode = "absolute", sizeref=1))



fig.show()