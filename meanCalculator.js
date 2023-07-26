function mathFunc(data) {
    let mean = 0;
    for (let i = 0; i < data.length; i++) {
        mean+=data[i];
    }
    return mean/data.length;
}

function setup() {
    let data = [];
    let inp;
    while (true) {
        inp = prompt("enter a value ").toLowerCase();
        if (inp === "end") {
            console.log("selection finished");
            break;
        } else {
            if (isNaN(Number(inp))) {
                console.log("invalid response");
            } else {
                data.push(Number(inp));
            }
        }
    }
    console.log("mean = " + String(mathFunc(data)));
    while (inp !== "yes" && inp !== "no") {
        inp = prompt("do you wish to restart? ").toLowerCase();
        switch (inp) {
            case "yes":
                console.log("restarting...");
                setup();
                break;
            case "no":
                console.log("finished...");
                throw new Error();
                break;
            default:
                console.log("invalid response")
        }
    }
}
console.log("welcome!\ntype end to finish setup process");
setup();
