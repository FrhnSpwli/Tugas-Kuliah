public class AbstrakMain {
  public static void main(String[] args) {
    //PNS pns = new PNS("374928");
    Guru guru = new Guru("374928");
    guru.setKeahlian("Matematika");
    System.out.println("NIP: " + guru.getNip());
    System.out.println("Keahlian: " + guru.getKeahlian());

  }
}
