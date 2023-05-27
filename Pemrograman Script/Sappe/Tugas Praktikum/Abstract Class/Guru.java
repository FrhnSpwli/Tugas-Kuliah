public class Guru extends PNS {
  private String keahlian, nama, nip;
  Guru (String nip){
    super(nip);
  }

  public void setKeahlian (String keahlian){
    this.keahlian = keahlian;
  }

  public String getKeahlian(){
    return keahlian;
  }
}
