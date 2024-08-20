import example

result = example.add_numbers(5, 3)
print(f"5 + 3 = {result}")

import inspect
module_file = inspect.getfile(example)
print(f"The 'example' module is located at: {module_file}")

# python setup.py build
# set PYTHONPATH=%PYTHONPATH%;build\lib.win-amd64-3.9
# python test.py
