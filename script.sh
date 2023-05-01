#!/bin/bash

matrice=100000000

# Chaîne de caractères à traiter
chaine="EgiMbrC7AbHOTyCiRJTU4eWlQwfgK4?fGQvzcjXBBw?NpxK6rv3OsObp?N9vjIqzHC?O9WwOT1VVtu32my2CzNNkHTozl5W,nE7Lm4rBJucP8XezREIuzgl0C7ANnn.561s9jBIYgECq!8XezREBDQ6sOG2i44iQIligvf9.Auk5hgNMuzREcjXzvPWrieWlQwfgK4km0xS?o0tuPB7VJo0t,nOwCUZAyxYyf0LvcfrIFmbPJDoAs9xaJA!cQF8?ffkln7SKO.h CVdc?JqPiAK9c8jt5Ck9ZAyrVP.y13pyC6OdvrN1dkHTseEgnDHQGEfKjBIf90KjAyFNBBwtXMaTZpbycC3HiqFp07SK44inxH5YAvEEml?CKjNQoCJwzN"

# Boucle "for" pour itérer sur la chaîne de caractères

for (( matrice=100000000; matrice < 1000000000; matrice++ ))
do

  # Affichage du résultat
  ./a.out $matrice 

done

