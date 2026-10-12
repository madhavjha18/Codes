from langchain_google_genai import ChatGoogleGenerativeAI
from langchain_core.messages import HumanMessage,AIMessage
from dotenv import load_dotenv

load_dotenv()

model = ChatGoogleGenerativeAI(model = "gemini-3.8-flash")

message = []

while True:
    user_input = input("YOU: ")

    if user_input.lower() in ["exit","quit"]:
        break

    message.append(HumanMessage(content = user_input))

    response = model.invoke(message)

    message.append(response.text)

    print("AI: ",response.text)