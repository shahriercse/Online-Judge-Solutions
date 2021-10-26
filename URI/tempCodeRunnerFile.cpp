    m = 0;

     for(int i = 0; i < 15; i++) {
        if(arr[i] % 2 != 0) {
            cout << "impar[" << m << "] = " << arr[i] << endl;
            m++;
        }
        if(i == 5) m = 0;
    }