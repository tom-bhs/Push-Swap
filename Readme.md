
mettre ft_printf


PROBLEME:

entre "" ca na pas lair de trier correctement

ca fonctionne avec des nombres doubles alors que ca devrait retourner une erreur

verifier avec int_min et int_max

./push_swap 1 -- 45 32 (cert exemple passe et ca ne devrait pas)










https://github.com/nessrinemaalem/push_swap


sa (échanger a) : échanger les deux premiers nombres de A

sb (swap b) : échangez les deux premiers nombres de B

ss : sa + qn

ra (faire pivoter a) : le numéro du haut de A va au bas de A

rb (rotation b) : le numéro du haut de B va au bas de B

rr : ra + rb

rra (rotation inversée de a) : le numéro du bas de A va au sommet de A

rra (rotation inverse b) : le numéro du bas dans B va au sommet de B

rrr : rra + rrb

pa (appuyer sur a) : le numéro du haut de B va au sommet de A

pb (appuyer sur b) : le numéro du haut de A va au sommet de B