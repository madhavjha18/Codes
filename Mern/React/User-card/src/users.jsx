
const users = [
  {
    id: 1,
    name: "Wade Wilson",
    image: "https://i.pravatar.cc/300?img=11",
    salaryPerHour: 50,
    profession: "UI Designer",
    workType: "Freelance",
    skills: ["PHP", "Android", "IOS"],
    bio: "Hello my name is Wade Wilson and I am known as Deadpool."
  },
  {
    id: 2,
    name: "Jennifer Smith",
    image: "https://i.pravatar.cc/300?img=47",
    salaryPerHour: 40,
    profession: "Interactive Designer",
    workType: "Freelance",
    skills: ["Figma", "UI Design", "Prototyping"],
    bio: "I create engaging digital experiences focused on usability."
  },
  {
    id: 3,
    name: "Alex Johnson",
    image: "https://i.pravatar.cc/300?img=12",
    salaryPerHour: 60,
    profession: "Frontend Developer",
    workType: "Full-time",
    skills: ["React", "JavaScript", "CSS"],
    bio: "I build responsive and interactive web applications."
  },
  {
    id: 4,
    name: "Sophia Williams",
    image: "https://i.pravatar.cc/300?img=44",
    salaryPerHour: 45,
    profession: "UI/UX Designer",
    workType: "Freelance",
    skills: ["Figma", "Wireframes", "Research"],
    bio: "I design intuitive interfaces that solve real user problems."
  },
  {
    id: 5,
    name: "Daniel Brown",
    image: "https://i.pravatar.cc/300?img=13",
    salaryPerHour: 55,
    profession: "Backend Developer",
    workType: "Contract",
    skills: ["Node.js", "SQL", "API"],
    bio: "I develop reliable backend systems and scalable APIs."
  },
  {
    id: 6,
    name: "Emily Davis",
    image: "https://i.pravatar.cc/300?img=49",
    salaryPerHour: 35,
    profession: "Graphic Designer",
    workType: "Freelance",
    skills: ["Photoshop", "Illustrator", "Branding"],
    bio: "I turn creative ideas into memorable visual designs."
  },
  {
    id: 7,
    name: "Michael Miller",
    image: "https://i.pravatar.cc/300?img=14",
    salaryPerHour: 70,
    profession: "Software Engineer",
    workType: "Full-time",
    skills: ["C++", "Java", "DSA"],
    bio: "I enjoy building efficient software and solving complex problems."
  },
  {
    id: 8,
    name: "Olivia Wilson",
    image: "https://i.pravatar.cc/300?img=45",
    salaryPerHour: 48,
    profession: "Mobile Developer",
    workType: "Freelance",
    skills: ["Flutter", "Dart", "Firebase"],
    bio: "I build smooth mobile experiences for Android and iOS."
  },
  {
    id: 9,
    name: "James Taylor",
    image: "https://i.pravatar.cc/300?img=15",
    salaryPerHour: 65,
    profession: "Data Scientist",
    workType: "Contract",
    skills: ["Python", "Pandas", "Machine Learning"],
    bio: "I transform data into insights that support better decisions."
  },
  {
    id: 10,
    name: "Ava Anderson",
    image: "https://i.pravatar.cc/300?img=48",
    salaryPerHour: 42,
    profession: "Content Writer",
    workType: "Freelance",
    skills: ["SEO", "Copywriting", "Research"],
    bio: "I write clear and engaging content for digital audiences."
  },
  {
    id: 11,
    name: "William Thomas",
    image: "https://i.pravatar.cc/300?img=16",
    salaryPerHour: 58,
    profession: "DevOps Engineer",
    workType: "Full-time",
    skills: ["Docker", "AWS", "Linux"],
    bio: "I automate deployments and improve application reliability."
  },
  {
    id: 12,
    name: "Isabella Moore",
    image: "https://i.pravatar.cc/300?img=46",
    salaryPerHour: 52,
    profession: "Product Designer",
    workType: "Freelance",
    skills: ["Figma", "UX Research", "Design Systems"],
    bio: "I connect user needs with practical and beautiful product designs."
  },
  {
    id: 13,
    name: "Benjamin Martin",
    image: "https://i.pravatar.cc/300?img=17",
    salaryPerHour: 62,
    profession: "Cloud Engineer",
    workType: "Contract",
    skills: ["AWS", "Azure", "Terraform"],
    bio: "I build secure and scalable cloud infrastructure."
  },
  {
    id: 14,
    name: "Mia Jackson",
    image: "https://i.pravatar.cc/300?img=43",
    salaryPerHour: 38,
    profession: "Web Designer",
    workType: "Freelance",
    skills: ["HTML", "CSS", "Webflow"],
    bio: "I create clean websites with a focus on visual clarity."
  },
  {
    id: 15,
    name: "Lucas White",
    image: "https://i.pravatar.cc/300?img=18",
    salaryPerHour: 75,
    profession: "AI Engineer",
    workType: "Full-time",
    skills: ["Python", "LLMs", "LangChain"],
    bio: "I develop intelligent applications powered by modern AI."
  },
  {
    id: 16,
    name: "Charlotte Harris",
    image: "https://i.pravatar.cc/300?img=41",
    salaryPerHour: 46,
    profession: "Digital Marketer",
    workType: "Freelance",
    skills: ["SEO", "Google Ads", "Analytics"],
    bio: "I help businesses grow through data-driven marketing."
  },
  {
    id: 17,
    name: "Henry Clark",
    image: "https://i.pravatar.cc/300?img=19",
    salaryPerHour: 57,
    profession: "Database Developer",
    workType: "Contract",
    skills: ["MySQL", "PostgreSQL", "MongoDB"],
    bio: "I design efficient databases and optimize data access."
  },
  {
    id: 18,
    name: "Amelia Lewis",
    image: "https://i.pravatar.cc/300?img=42",
    salaryPerHour: 44,
    profession: "Video Editor",
    workType: "Freelance",
    skills: ["Premiere Pro", "After Effects", "Editing"],
    bio: "I craft compelling stories through video and motion."
  },
  {
    id: 19,
    name: "Alexander Lee",
    image: "https://i.pravatar.cc/300?img=20",
    salaryPerHour: 68,
    profession: "Cybersecurity Engineer",
    workType: "Full-time",
    skills: ["Network Security", "Linux", "Python"],
    bio: "I help protect systems and applications from security threats."
  },
  {
    id: 20,
    name: "Evelyn Walker",
    image: "https://i.pravatar.cc/300?img=40",
    salaryPerHour: 49,
    profession: "Game Developer",
    workType: "Freelance",
    skills: ["Unity", "C#", "Blender"],
    bio: "I create interactive games and immersive digital experiences."
  }
];

export default users;