from langchain_core.prompts import PromptTemplate
from langchain_groq import ChatGroq
from dotenv import load_dotenv

load_dotenv()

model = ChatGroq(model="openai/gpt-oss-20b", temperature=0.3, max_tokens=1000)

# detailed way
template = PromptTemplate(
    template='Greet this person in 5 languages. The name of the person is {name}',
    input_variables=['name']
)


name = input("Enter your name: ")
# fill the values of the placeholders

# prompt = template.invoke({'name':name})
# result = model.invoke(prompt)

# Using chain we can alternatively use above 2 lines of code
chain = template | model

result = chain.invoke({"name": name})

print(result.content)

