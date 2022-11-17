import json

filename = "D:\json2.json"
with open(filename, "r") as f:
    data = json.load(f)


data['quiz']['maths']['q3'] = {'question': '9 + 9= ?', 'options': ['18', '81', '99', '999'], 'answer': '18'}


with open(filename, 'w') as json_file:
    json.dump(data, json_file, indent=4, separators=(',',': '))
