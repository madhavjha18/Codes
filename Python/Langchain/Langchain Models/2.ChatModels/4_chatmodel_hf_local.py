from langchain_huggingface import ChatHuggingFace, HuggingFacePipeline
from langchain_core.messages import HumanMessage, AIMessage

llm = HuggingFacePipeline.from_model_id(
    model_id='TinyLlama/TinyLlama-1.1B-Chat-v1.0',
    task='text-generation',
    pipeline_kwargs=dict(
        temperature=0.2,
    )
)

model = ChatHuggingFace(llm=llm)


messages = []

while True:
    user_input = input("YOU: ")

    if user_input.lower() in ["exit", "quit"]:
        break

    messages.append(HumanMessage(content=user_input))

    # Keep only the latest 4 messages
    messages = messages[-4:]

    response = model.invoke(messages)

    print("AI:", response.content)

    messages.append(AIMessage(content=response.content))