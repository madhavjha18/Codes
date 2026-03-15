const quotes = [
"The only way to do great work is to love what you do. - Steve Jobs",
"Success is not final, failure is not fatal: it is the courage to continue that counts. - Winston Churchill",
"Believe you can and you're halfway there. - Theodore Roosevelt",
"Your time is limited, so don’t waste it living someone else’s life. - Steve Jobs",
"Do what you can, with what you have, where you are. - Theodore Roosevelt",
"Dream big and dare to fail. - Norman Vaughan",
"Turn your wounds into wisdom. - Oprah Winfrey",
"Everything you’ve ever wanted is on the other side of fear. - George Addair",
"Hardships often prepare ordinary people for an extraordinary destiny. - C.S. Lewis",
"Success usually comes to those who are too busy to be looking for it. - Henry David Thoreau",
"It always seems impossible until it's done. - Nelson Mandela",
"Act as if what you do makes a difference. It does. - William James",
"Do one thing every day that scares you. - Eleanor Roosevelt",
"The best way to predict the future is to create it. - Peter Drucker",
"What you get by achieving your goals is not as important as what you become. - Zig Ziglar",
"The secret of getting ahead is getting started. - Mark Twain",
"Quality means doing it right when no one is looking. - Henry Ford",
"Opportunities don't happen. You create them. - Chris Grosser",
"If you want to achieve greatness stop asking for permission. - Anonymous",
"Great things never come from comfort zones. - Anonymous",
"Dream it. Wish it. Do it. - Anonymous",
"Success doesn’t just find you. You have to go out and get it. - Anonymous",
"The harder you work for something, the greater you’ll feel when you achieve it. - Anonymous",
"Don’t stop when you’re tired. Stop when you’re done. - Anonymous",
"Wake up with determination. Go to bed with satisfaction. - Anonymous",
"Do something today that your future self will thank you for. - Sean Patrick Flanery",
"Little things make big days. - Anonymous",
"It’s going to be hard, but hard does not mean impossible. - Anonymous",
"Don’t wait for opportunity. Create it. - George Bernard Shaw",
"The key to success is to focus on goals, not obstacles. - Anonymous",
"Dream bigger. Do bigger. - Anonymous",
"Push yourself, because no one else is going to do it for you. - Anonymous",
"Great things take time. - Anonymous",
"Doubt kills more dreams than failure ever will. - Suzy Kassem",
"The only limit to our realization of tomorrow will be our doubts of today. - Franklin D. Roosevelt",
"In the middle of difficulty lies opportunity. - Albert Einstein",
"Strive not to be a success, but rather to be of value. - Albert Einstein",
"Life is 10% what happens to us and 90% how we react to it. - Charles Swindoll",
"Success is walking from failure to failure with no loss of enthusiasm. - Winston Churchill",
"Go confidently in the direction of your dreams. - Henry David Thoreau",
"Don’t let yesterday take up too much of today. - Will Rogers",
"You learn more from failure than from success. - Anonymous",
"It does not matter how slowly you go as long as you do not stop. - Confucius",
"If you are working on something exciting, it will keep you motivated. - Steve Jobs",
"Don’t watch the clock; do what it does. Keep going. - Sam Levenson",
"Failure will never overtake me if my determination to succeed is strong enough. - Og Mandino",
"Start where you are. Use what you have. Do what you can. - Arthur Ashe",
"Success is not in what you have, but who you are. - Bo Bennett",
"Perseverance is not a long race; it is many short races one after another. - Walter Elliot",
"The harder the conflict, the greater the triumph. - George Washington",
"Success is the sum of small efforts repeated day in and day out. - Robert Collier",
"Action is the foundational key to all success. - Pablo Picasso",
"Don’t be pushed by your problems. Be led by your dreams. - Ralph Waldo Emerson",
"The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt",
"Work hard in silence, let success make the noise. - Frank Ocean",
"Don’t wish it were easier. Wish you were better. - Jim Rohn",
"A year from now you may wish you had started today. - Karen Lamb",
"Your limitation—it’s only your imagination. - Anonymous",
"Sometimes later becomes never. Do it now. - Anonymous",
"Success is not the key to happiness. Happiness is the key to success. - Albert Schweitzer",
"Try to be a rainbow in someone’s cloud. - Maya Angelou",
"The best revenge is massive success. - Frank Sinatra",
"Success is liking yourself, liking what you do, and liking how you do it. - Maya Angelou",
"You miss 100% of the shots you don’t take. - Wayne Gretzky",
"Don’t be afraid to give up the good to go for the great. - John D. Rockefeller",
"I find that the harder I work, the more luck I seem to have. - Thomas Jefferson",
"Whether you think you can or you think you can’t, you’re right. - Henry Ford",
"The way to get started is to quit talking and begin doing. - Walt Disney",
"If opportunity doesn’t knock, build a door. - Milton Berle",
"Success is not for the lazy. - Anonymous",
"Discipline is the bridge between goals and accomplishment. - Jim Rohn",
"Motivation is what gets you started. Habit is what keeps you going. - Jim Ryun",
"Your big opportunity may be right where you are now. - Napoleon Hill",
"Don’t limit your challenges. Challenge your limits. - Anonymous",
"Push harder than yesterday if you want a different tomorrow. - Anonymous",
"Be stronger than your excuses. - Anonymous",
"Work until your idols become your rivals. - Anonymous",
"Do what you love and success will follow. - Oprah Winfrey",
"The difference between ordinary and extraordinary is that little extra. - Jimmy Johnson",
"Success is achieved and maintained by those who try and keep trying. - W. Clement Stone",
"Energy and persistence conquer all things. - Benjamin Franklin",
"Small deeds done are better than great deeds planned. - Peter Marshall",
"Success is a journey, not a destination. - Arthur Ashe",
"Hard work beats talent when talent doesn’t work hard. - Tim Notke",
"Your dreams don’t work unless you do. - John C. Maxwell",
"Stay hungry, stay foolish. - Steve Jobs",
"Never stop learning. - Anonymous",
"Consistency creates success. - Anonymous",
"Make each day your masterpiece. - John Wooden",
"The best preparation for tomorrow is doing your best today. - H. Jackson Brown Jr.",
"Success favors the bold. - Virgil",
"Fortune favors the brave. - Virgil",
"Be the change you wish to see in the world. - Mahatma Gandhi",
"Well done is better than well said. - Benjamin Franklin",
"Everything begins with an idea. - Earl Nightingale",
"Your attitude determines your direction. - Anonymous",
"Great things never come from comfort zones. - Anonymous"
];


/*

const button = document.querySelector("button");
const quote = document.getElementById("quote");

function generateQuote(){
    const index = Math.floor(Math.random() * quotes.length);
    quote.textContent = quotes[index];
}

// initial quote
generateQuote();

// event listener
button.addEventListener("click", generateQuote);

*/


// For initial quote(Changes every refresh)
const index = Math.floor(Math.random()*quotes.length);
document.getElementById("quote").textContent = quotes[index];

// Event listner
const button = document.querySelector('button');

button.addEventListener('click',()=>{
    const index = Math.floor(Math.random()*quotes.length);

    document.getElementById("quote").textContent = quotes[index];
})