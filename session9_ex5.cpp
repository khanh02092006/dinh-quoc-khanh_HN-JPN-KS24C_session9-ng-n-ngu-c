#include <stdio.h>

int main() {
    int n = 0;
    int mang[100];
    while (1) {
        int lua_chon;
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cua mang\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri max va min trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Thêm mot phan tu vào vi trí chi dinh\n");
        printf("8. thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 1:
                printf("Nhap so phan tu mang tu 1-100: ");
                scanf("%d", &n);
                if (n <= 0 || n > 100) {
                    printf("So phan tu khong hop le\n");
                    n = 0;
                    break;
                }
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &mang[i]);
                }
                break;

            case 2:
                printf("Mang da nhap: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", mang[i]);
                }
                printf("\n");
                break;

            case 3: {
                int tong_chan = 0;
                printf("Cac phan tu chan: ");
                for (int i = 0; i < n; i++) {
                    if (mang[i] % 2 == 0) {
                        printf("%d ", mang[i]);
                        tong_chan += mang[i];
                    }
                }
                printf("\nTong cac so chan: %d\n", tong_chan);
                break;
            }

            case 4: {
                if (n == 0) {
                    printf("Mang chua co phan tu nao.\n");
                    break;
                }
                int max = mang[0], min = mang[0];
                for (int i = 1; i < n; i++) {
                    if (mang[i] > max) max = mang[i];
                    if (mang[i] < min) min = mang[i];
                }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
                break;
            }

            case 5: {
                int tong_nt = 0;
                printf("Cac so nguyen to: ");
                for (int i = 0; i < n; i++) {
                   
                    int so_nguyen_to = 1; 
                    if (mang[i] < 2) {
                        so_nguyen_to = 0; 
                    } else {
                        for (int j = 2; j * j <= mang[i]; j++) {
                            if (mang[i] % j == 0) {
                                so_nguyen_to = 0; 
                                break;
                            }
                        }
                    }
                    if (so_nguyen_to==1) {
                        printf("%d ",mang[i]);
                        tong_nt += mang[i];
                    }
                }
                printf("\nTong cac so nguyen to: %d\n", tong_nt);
                break;
            }

            case 6: {
                if (n == 0) {
                    printf("Mang chua co phan tu nao.\n");
                    break;
                }
                int x, dem = 0;
                printf("Nhap mot so can thong ke: ");
                scanf("%d", &x);
                for (int i = 0; i < n; i++) {
                    if (mang[i] == x) {
                        dem++;
                    }
                }
                printf("So phan tu co gia tri %d la: %d\n", x, dem);
                break;
            }
             case 7:
            if (n < 100) {
                    int phan_tu_moi, vi_tri_moi;
                    printf("Nhap vi tri muon them (tu 1 den %d): ", n);
                    scanf("%d", &vi_tri_moi);
                    if (vi_tri_moi < 0 || vi_tri_moi > n) {
                        printf("Vi tri khong hop le!\n");
                        break;
                    }
                    printf("Nhap gia tri phan tu moi: ");
                    scanf("%d", &phan_tu_moi);
                    for (int i = n; i > vi_tri_moi; i--) {
                        mang[i] = mang[i - 1];
                    }
                    mang[vi_tri_moi] = phan_tu_moi;
                    n++;
                    printf("Them thanh cong!\n");
                } else {
                    printf("Mang da day!\n");
                }
                printf("Mang sau khi them: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", mang[i]);
                }
                printf("\n");
                break;
             		 case 8:
            printf("Goodbye!\n");
            break;
            

            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    }
    return 0;
    }

