from langchain_google_genai import GoogleGenerativeAIEmbeddings
from dotenv import load_dotenv

load_dotenv()

embeddings = GoogleGenerativeAIEmbeddings(
    model="gemini-embedding-001",
    output_dimensionality=40
)

documents = [
    "Hi My name is Madhav Jha",
    "Delhi is the capital city of India",
    "I am a software developer"
]

vector = embeddings.embed_documents(documents)

print(str(vector))
