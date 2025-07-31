const employees = [
  {
    id: 1,
    name: "John Doe",
    age: 30,
    department: "IT",
    specialization: "Python",
    salary: 50000,
  },
  {
    id: 2,
    name: "Adam Smith",
    age: 38,
    department: "HR",
    specialization: "Java",
    salary: 45000,
  },
  {
    id: 3,
    name: "Robin Hode",
    age: 25,
    department: "Finance",
    specialization: "JavaScript",
    salary: 60000,
  },
  {
    id: 4,
    name: "Jada News",
    age: 22,
    department: "IT",
    specialization: "JavaScript",
    salary: 40000,
  },
  {
    id: 5,
    name: "Ana Ruth",
    age: 27,
    department: "HR",
    specialization: "C++",
    salary: 30000,
  },
];

function displayEmployees() {
  const totalEmployees = employees
    .map(
      (employee, index) =>
        `<p>${employee.id}: ${employee.name}: ${employee.department}- $${employee.salary}</p>`
    )
    .join("");
  document.getElementById("employeesDetails").innerHTML = totalEmployees;
}

function calculateTotalSalaries() {
  const totalSalaries = employees.reduce(
    (acc, employee) => acc + employee.salary,
    0
  );
  alert(`Total Salaries: $${totalSalaries}`);
}

function displayHREmployees() {
  const hrEmployees = employees.filter(
    (employee) => employee.department === "HR"
  );
  const hrEmployeesDisplay = hrEmployees
    .map(
      (employee, index) =>
        `<p>${employee.id}: ${employee.name}: ${employee.name}- ${employee.department} - $${employee.salary} </p>`
    )
    .join("");
  document.getElementById("employeesDetails").innerHTML = hrEmployeesDisplay;
}

function findEmployeesById(employeeId) {
  const foundEmployee = employees.find((employee) => employee.id == employeeId);
  if (foundEmployee) {
    document.getElementById(
      "employeesDetails"
    ).innerHTML = `<p>${foundEmployee.id}: ${foundEmployee.name} - ${foundEmployee.department} - $${foundEmployee.salary}</p>`;
  } else {
    document.getElementById("employeesDetails").innerHTML =
      "no employee has been found with this ID";
  }
}

function findEmployeeBySpecialization() {
  const SpecialEmployee = employees.filter(
    (employee) => employee.specialization === "JavaScript"
  );
  const displaySpecialist = SpecialEmployee.map(
    (employee, index) =>
      `<p>${employee.id}:${employee.name}- ${employee.specialization} - ${employee.department} - $${employee.salary}</p>`
  ).join("");
  document.getElementById("employeesDetails").innerHTML =
    displaySpecialist || "No employee found with this spec";
}
