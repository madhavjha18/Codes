from langchain_huggingface import HuggingFaceEmbeddings
from sklearn.metrics.pairwise import cosine_similarity


embedding = HuggingFaceEmbeddings(model_name="sentence-transformers/all-MiniLM-L6-v2")

documents = [
    "Virat Kohli is an Indian cricketer known for his aggressive batting and leadership.",
    "MS Dhoni is a former Indian captain famous for his calm demeanor and finishing skills.",
    "Sachin Tendulkar, also known as the 'God of Cricket', holds many batting records.",
    "Rohit Sharma is known for his elegant batting and record-breaking double centuries.",
    "Jasprit Bumrah is an Indian fast bowler known for his unorthodox action and yorkers."
]

query = "tell me about virat kohli" #or "Tell me about indian bowler", "tell me about jasprit bumrah"


doc_embeddings = embedding.embed_documents(documents)

query_embeddings = embedding.embed_query(query)

#To find similarity between query and documents we find out cosine similarity
#inside cosine_similarity function we send in 2d list(vector) and after we get the similarity we store it in score but the result is 2d list of size 1 so [0] to convert it back to 1d list
score = cosine_similarity([query_embeddings],doc_embeddings)[0] 


#enumurate: to keep embeddings in key-value pair such that after sorting their relative index is known
#list: to convert this enumerate score into list
#sorted: to find most similer embedding based on 2nd value i.e our embeddings not key, and key=lambda x:x[1] is how we do tell on what basis we have to sort
#[-1] gives last element
index,value = sorted(list(enumerate(score)),key=lambda x:x[1])[-1]


print(query)
print(documents[index])
print("similarity score is: ",value)