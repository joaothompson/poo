
Install miniconda:

https://www.anaconda.com/docs/getting-started/miniconda/install#linux-2

mkdir -p ~/miniconda3
wget https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh -O ~/miniconda3/miniconda.sh
bash ~/miniconda3/miniconda.sh -b -u -p ~/miniconda3
rm ~/miniconda3/miniconda.sh

source ~/miniconda3/bin/activate

conda init --all

conda init --all --dry-run

conda deactivate

eExemplo:
conda create --name myenv python=3.9 numpy pandas

conda activate myenv

conda deactivate

conda env list

conda remove --name myenv --all

-> digitem y e confirmem para deletar.


Poetry test:

mkdir poetryTest
cd poetryTest

conda create --name poetryTest python=3.12

conda activate poetryTest

pip3 install poetry

git clone https://github.com/render-examples/python-poetry

poetry install


Rodar:

pytest


Se tudo der certo, rodar:

flask --app poetry_flask/app.py run

Abrir página: http://127.0.0.1:5000/

conda deactivate

conda remove --name poetryTest --all

rm -rf poetryTest

