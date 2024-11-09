echo "Testando (com 2 linhas e 3 colunas)..."
echo

output=$(./a.out < ./testes/input1.txt)
expected_output="1 2 3
4 5 6"

if [ $? -eq 0 ] ; then
  echo "Running ok: Program exited zero"
else
  echo "Fail on running: Program did not exit zero"
  exit 1
fi

if [ "$output" == "$expected_output" ] ; then
  echo "Pass: A saida esperada esta correta"
else
  echo "Era esperado '$expected_output' mas o programa retornou: $output"
  exit 1
fi

echo
echo "Teste 1 realizado com sucesso"

exit 0