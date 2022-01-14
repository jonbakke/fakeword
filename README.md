# fakeword

## Description
`fakeword` generates strings that resemble words of American English. Consecutive letters are selected based on digraph frequency: certain letters are more or less likely to follow other certain letters, and `fakeword` reverses this by taking a given letter and using a random number to come up with the following letter in an attempt to mimic actual language. If I recall correctly, the original data set is from an analysis of 19th century telegraphs used by U.S. government officials, so it is hardly representative of modern English or human language generally. Yet it might be a useful starting point for writers of speculative fiction, generators of memorable passwords, designers of alternative keyboard layouts, or designers weary of lorem ipsum.

## Wordle
By the way, if you like the puzzle wordle, you might not-quite-cheat by trying something like:
```
fakeword 100000 | tr ' ' '\n' | sed -n '/^.....$/p' | tr '\n' ' '
```
...then exchange the five periods between the caret `^` and dollar `$` for the characters you know, such as:
```
fakeword 100000 | tr ' ' '\n' | sed -n '/^a...e.$/p' | tr '\n' ' '
```

## Platforms
Seems to work on GNU/Linux and Darwin. Haven't tested it yet on other BSDs; the only platform-dependent code that I've identified is for seeding `random()`, where `srandomdev()` is used where the GNU library is unavailable.

## How to
```
git clone https://github.com/jonbakke/fakeword
cd fakeword
cc -o fakeword fakeword.c
# generate one fake word
./fakeword
# generate 100 fake words
./fakeword 100
# generate 100 fake words, at least 5 characters long
./fakeword 100 5
# generate 100 fake words, at least 5 but no more than 15 characters long
./fakeword 100 5 15
# generate list of 1,000,000 words, one word per line
./fakeword 1000000 | tr ' ' '\n' > list.txt
```

## Output example
`./fakeword 100 3 11`
arslai hach thimpoma tac trithant theremal deru dergle alis moupe ooo shonugh oositigh benc farath lyfof empoon wechofo heycoonistl thatrearopl olaionco chiviorecht arthinon atenyaie indur tyengita the hestathidis thesuion fed swa tugorout ane aplale codadorsino mandoea ongrthemru alded prng ther angi dincl shyone besema atiomono ofilaifan itever thi bir ppr reth tloo dedon ike ver gpl hege ing hito lean oged widio butesngl heah rack ondadatul iclo idestoumer bedri ind oul moutoum qudesthe indigith hatrru hayossito rexirorl lonso weshcackico oreokerc dofr hol athegewheyt sshon ate mea irtendisea poughaere anor hen tavesthtoru oriasticken selask irerm wedo ndgoqu ser orgellado dethesplers ierni
