public abstract class PNS {
  private String nip;
  PNS (String nip){
    this.nip = nip;
  }

  public String getNip(){
    return nip;
  }

  public abstract void setKeahlian (String keahlian);
}