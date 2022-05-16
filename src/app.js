const featured = document.querySelector(".featured");

setInterval(dynamicFeatured, 3000);

// Dynamic featured 
let data = featuredData1;
function dynamicFeatured() {
    featured.innerHTML = `
    <div class="featuredInfo">
    <div class="top">
        <h1>${data.info}</h1>
    </div>
    <div class="bottom">
        <button>${data.buttonText}</button>
    </div>
    </div>
    `
    featured.style.backgroundImage = `url(${data.img})`;
    data.id === 1 ? data = featuredData2 : data = featuredData1;
}