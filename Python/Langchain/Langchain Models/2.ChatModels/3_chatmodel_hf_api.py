from langchain_huggingface import ChatHuggingFace, HuggingFaceEndpoint
from langchain_core.messages import AIMessage,HumanMessage
from dotenv import load_dotenv

load_dotenv()

llm = HuggingFaceEndpoint(
    repo_id= "Qwen/Qwen2.5-7B-Instruct",
    task="text-generation",
    provider="featherless-ai"
)

model = ChatHuggingFace(llm = llm)

messages = []

while True:
    user_input = input("YOU: ")

    if user_input in ["quit", "exit"]:
        break

    messages.append(HumanMessage(user_input))

    response = model.invoke(messages)

    messages.append(AIMessage(response.content))

    print("AI: ",response.content)