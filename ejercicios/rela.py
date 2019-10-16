from scipy import linalg
import numpy as np
#Defino una funcion que produce los generadores
def G(k):
    Ga=np.zeros((4,4))
    if k<=3:
        Ga[k][0]=-1.
        Ga[0][k]=-1.
    if k==4:
        Ga[3][2]=-1
        Ga[2][3]=1
    if k==5:
        Ga[3][1]=1
        Ga[1][3]=-1
    if k==6:
        Ga[2][1]=-1
        Ga[1][2]=1
    return Ga
#Defino el producto interno
def prod(A,B):
    Pa=np.dot(A,B)
    return 1/2.*np.trace(Pa)
#Inicializo la matriz de la metrica
Kill=np.zeros((6,6))
#Calculo la matriz
for i in range(0,6):
    for j in range(0,6):
        Kill[i][j]=prod(G(i+1),G(j+1))      
print(Kill)
#Calculo la inversa
KillInv=linalg.inv(Kill)
print (KillInv)

print('Conmutadores')
#Calculo los conmutadores
for i in range(0,6):
    for j in range(0,6):
        print(i+1,j+1)
        print(np.dot(G(i+1),G(j+1))-np.dot(G(j+1),G(i+1)))
