from langchain_huggingface import HuggingFaceEmbeddings

embedding = HuggingFaceEmbeddings(model_name="sentence-transformers/all-MiniLM-L6-v2")

text = "This is a sentence-transformers model: It maps sentences & paragraphs to a 384 dimensional dense vector space and can be used for tasks like clustering or semantic search. #NOTE: I HAVE NOT DELETED THIS MODEL FROM LOCAL CACHE IT IS OF ABOUT 90MB"

vector = embedding.embed_query(text)

print(str(vector))