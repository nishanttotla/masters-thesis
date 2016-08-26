void alt_list_simplified() {
  // set of predicates: {p}
  // allocate an initial node with predicate value TRUE
  var x = alloc();
  bool p_val = TRUE
  set(x, p) = p_val
  // set y to be the tail of the list
  var y = x;
  y->next = NULL
  // LOOP-CONS: build a list with alternating Boolean values.
  while (non_det()) {
    // allocate a new node with alternating value
    var z = alloc()
    p_val = !p_val
    set(z, p) = p_val
    // append it to the existing list
    y->next = z
    y = z
  }
  checkpoint:
  // rest of the program
  return;
}
