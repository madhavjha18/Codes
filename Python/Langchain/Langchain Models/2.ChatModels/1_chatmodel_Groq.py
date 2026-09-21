from langchain_groq import ChatGroq
from dotenv import load_dotenv
from langchain_core.messages import HumanMessage,AIMessage

load_dotenv()

model = ChatGroq(model="openai/gpt-oss-20b", temperature=0.7, max_tokens=100)

# response = model.invoke("what is the capital of India?")

# print(response.content)

message = []

while True:
    user_input = input("You: ")

    if user_input.lower() in ["exit","quit"]:
        break

    message.append(HumanMessage(content = user_input))

    response = model.invoke(message)

    message.append(AIMessage(content = response.content))

    print("AI: ",response.content)
