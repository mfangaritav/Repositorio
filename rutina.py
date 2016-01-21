import matplotlib.pyplot as plt
txt=open("datos.txt","r")
print txt.readline()
cadena=txt.readline()
tiempo=[]
distancia=[]
while " :" in cadena:
	print cadena
	print "i"
	tiempo.append(float(cadena.split(" :",2)[0]))
	distancia.append(float(cadena.split(" :",2)[1]))
	cadena=txt.readline()

txt.close()
plt.plot(tiempo, distancia)
plt.show()
