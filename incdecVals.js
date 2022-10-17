var id = 0; 
async function getAllIds() {
    id = -~id; // Increment
    // id = +(~id) // Decrement
    console.log(id);
    return id;
  }
