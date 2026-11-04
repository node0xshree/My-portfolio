let themeBtn = document.getElementById("btn");

themeBtn.addEventListener("click", function() {

    document.body.classList.toggle("dark-mode");

    if (document.body.classList.contains("dark-mode")) {
        themeBtn.textContent = "☀️ Light Mode";
    }
    else {
        themeBtn.textContent = "🌙 Dark Mode";
    }

});

let skillCards = document.querySelectorAll(".skill-card");

skillCards.forEach(function(card) {

    card.addEventListener("click", function() {

        card.classList.toggle("active");

    });

});