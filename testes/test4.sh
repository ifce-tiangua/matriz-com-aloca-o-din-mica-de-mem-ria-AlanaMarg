echo "Testando (7 linhas e 1 coluna)..."
echo

output=$(./a.out < ./testes/input4.txt)
expected_output="59
83
78
23
51
2
78"

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
echo "Teste 4 realizado com sucesso"

exit 0