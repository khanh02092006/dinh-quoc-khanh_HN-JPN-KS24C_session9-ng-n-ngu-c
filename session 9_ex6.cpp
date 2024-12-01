#include <stdio.h>

int main() {
    int n, m;
    int mang[100][100];
    
    while (1) {
        int lua_chon;

      
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu le va tinh tong\n");
        printf("4. In ra cac phan tu tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu tren duong cheo chinh\n");
        printf("6. In ra cac phan tu tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 1: 
                printf("Nhap so hang (n): ");
                scanf("%d", &n);
                printf("Nhap so cot (m): ");
                scanf("%d", &m);

                if (n > 100 || m > 100) {
                    printf("So hang hoac cot khong hop le! (Toi da 100)\n");
                    break;
                }

                printf("Nhap gia tri cac phan tu cua mang:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("mang[%d][%d]: ", i, j);
                        scanf("%d", &mang[i][j]);
                    }
                }
                break;

            case 2: 
                printf("Cac gia tri cua mang la:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("%2d ", mang[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3: { 
                int tong_le = 0;
                printf("Cac phan tu le la: ");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (mang[i][j] % 2 != 0) {
                            printf("%d ", mang[i][j]);
                            tong_le += mang[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le: %d\n", tong_le);
                break;
            }

            case 4: { 
                int tich = 1;
                printf("Cac phan tu tren duong bien la: ");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                            printf("%d ", mang[i][j]);
                            tich *= mang[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien: %d\n", tich);
                break;
            }

            case 5: 
                printf("Cac phan tu tren duong cheo chinh la: ");
                for (int i = 0; i < n && i < m; i++) {
                    printf("%d ", mang[i][i]);
                }
                printf("\n");
                break;

            case 6: 
                printf("Cac phan tu tren duong cheo phu la: ");
                for (int i = 0; i < n && i < m; i++) {
                    printf("%d ", mang[i][m - 1 - i]);
                }
                printf("\n");
                break;

            case 7: {
                int tong_max = 0;
                int dong_max = 0;

                for (int i = 0; i < n; i++) {
                    int tong_hang = 0;
                    for (int j = 0; j < m; j++) {
                        tong_hang += mang[i][j];
                    }
                    if (i == 0 || tong_hang > tong_max) {
                        tong_max = tong_hang;
                        dong_max = i;
                    }
                }

                printf("Dong co tong gia tri lon nhat la dong %d voi tong la %d\n", dong_max, tong_max);
                printf("Cac phan tu trong dong do la: ");
                for (int j = 0; j < m; j++) {
                    printf("%d ", mang[dong_max][j]);
                }
                printf("\n");
                break;
            }

            case 8: 
                printf("Thoat chuong trinh.\n");
                return 0;

            default:
                printf("Lua chon khong hop le, vui long nhap lai!\n");
        }
    }

    return 0;
}

