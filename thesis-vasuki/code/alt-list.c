void alt_list() {
  bool d = TRUE;
  List l = cons(d, NIL);
  // LOOP-CONS: build a list with alternating Boolean values.
  while (non_det()) {
    d = !d;
    l = cons(d, l);
  }
  // LOOP-CHK: check that the Boolean values alternate.
  while (l != NIL) {
    assert(l->data == d);
    d = !d;
    l = l->next;
  }
  return;
}
