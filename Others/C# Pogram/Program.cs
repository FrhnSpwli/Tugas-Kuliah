class Program
{
    static List<Package> packages = new List<Package>();
    static List<Transaction> transactions = new List<Transaction>();

    static void Main(string[] args)
    {
        bool exit = false;

        InitializeData();

        while (!exit)
        {
            Console.Clear();
            Console.WriteLine("Aplikasi Penyewaan WO");
            Console.WriteLine("1. Lihat Paket WO");
            Console.WriteLine("2. Transaksi");
            Console.WriteLine("3. Lihat Data Transaksi");
            Console.WriteLine("4. Laporan");
            Console.WriteLine("5. Keluar");
            Console.Write("Pilih menu: ");

            int choice;
            if (int.TryParse(Console.ReadLine(), out choice))
            {
                switch (choice)
                {
                    case 1:
                        LihatPaketWO();
                        break;
                    case 2:
                        Transaksi();
                        break;
                    case 3:
                        LihatDataTransaksi();
                        break;
                    case 4:
                        Laporan();
                        break;
                    case 5:
                        exit = true;
                        break;
                    default:
                        Console.WriteLine("Menu tidak valid.");
                        break;
                }
            }
            else
            {
                Console.WriteLine("Masukan tidak valid.");
            }

            Console.WriteLine("Tekan Enter untuk melanjutkan...");
            Console.ReadLine();
        }
    }

    static void LihatPaketWO()
    {
        Console.Clear();
        Console.WriteLine("Daftar Paket WO:");

        foreach (var package in packages)
        {
            Console.WriteLine($"- {package.Name} (Rp {package.Price.ToString("N0")})");
        }
    }

    static void Transaksi()
    {
        Console.Clear();
        Console.WriteLine("Transaksi");

        Console.WriteLine("Daftar Paket WO:");
        for (int i = 0; i < packages.Count; i++)
        {
            Console.WriteLine($"{i + 1}. {packages[i].Name} (Rp {packages[i].Price.ToString("N0")})");
        }

        Console.Write("Pilih paket (masukkan nomor): ");
        int packageIndex;
        if (int.TryParse(Console.ReadLine(), out packageIndex))
        {
            if (packageIndex >= 1 && packageIndex <= packages.Count)
            {
                Console.Write("Nama Customer: ");
                string customerName = Console.ReadLine();

                Console.Write("Durasi Penyewaan (dalam hari): ");
                int duration;
                if (int.TryParse(Console.ReadLine(), out duration))
                {
                    if (duration > 0)
                    {
                        Package selectedPackage = packages[packageIndex - 1];
                        decimal totalPrice = selectedPackage.Price * duration;

                        Transaction transaction = new Transaction
                        {
                            CustomerName = customerName,
                            PackageName = selectedPackage.Name,
                            Duration = duration,
                            TotalPrice = totalPrice
                        };

                        transactions.Add(transaction);

                        Console.WriteLine("Transaksi berhasil ditambahkan.");
                    }
                    else
                    {
                        Console.WriteLine("Durasi harus lebih dari 0.");
                    }
                }
                else
                {
                    Console.WriteLine("Durasi tidak valid.");
                }
            }
            else
            {
                Console.WriteLine("Nomor paket tidak valid.");
            }
        }
        else
        {
            Console.WriteLine("Masukan tidak valid.");

        }

        point1:

        Console.Write("Lanjutkan Transaksi? (y/n): ");
        string answer = Console.ReadLine();
        if(answer == "Y" || answer == "y"){
            Transaksi();
        }
        if(answer == "N" || answer == "n") {
            Console.WriteLine("Transaksi berhasil ditambahkan");
        }
        else{
            Console.WriteLine("Masukan tidak valid");
            goto point1;
        }

    }

    static void LihatDataTransaksi()
    {
        Console.Clear();
        Console.WriteLine("Data Transaksi:");

        foreach (var transaction in transactions)
        {
            Console.WriteLine($"- Nama: {transaction.CustomerName}, Paket: {transaction.PackageName}, Durasi: {transaction.Duration} hari, Total Harga: {transaction.TotalPrice:C}");
        }
    }

    static void Laporan()
    {
        Console.Clear();
        Console.WriteLine("Laporan");
        Console.WriteLine($"Total Transaksi: {transactions.Count}");
        decimal totalIncome = 0;
        foreach (var transaction in transactions)
        {
            totalIncome += transaction.TotalPrice;
        }
        Console.WriteLine($"Total Pendapatan: Rp {totalIncome.ToString("N0")}");
    }

    static void InitializeData()
    {
        packages.Add(new Package { Name = "Paket A", Price = 500000 });
        packages.Add(new Package { Name = "Paket B", Price = 750000 });
        packages.Add(new Package { Name = "Paket C", Price = 1000000 });
    }
}

class Package
{
    public string Name { get; set; }
    public decimal Price { get; set; }
}

class Transaction
{
    public string CustomerName { get; set; }
    public string PackageName { get; set; }
    public int Duration { get; set; }
    public decimal TotalPrice { get; set; }
}
