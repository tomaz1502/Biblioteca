# Para usar (hash das linhas [l1, l2]):
# ./hash.sh arquivo.cpp l1 l2
sed -n $2','$3' p' $1 | cpp -dD -P -fpreprocessed | tr -d '[:space:]' | md5sum | cut -c-6
