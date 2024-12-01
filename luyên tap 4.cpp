#include<stdio.h>
int main() {
    int mang[100];
    int n = 0;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap vào mang\n");
        printf("2. Hien thu mang\n");
        printf("3. Thêm phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xóa phan tu\n");
        printf("6. Thoát\n");
        printf("Lua chon cua ban: ");

        int lua_chon;
        scanf("%d", &lua_chon);

        switch (lua_chon) {
        case 1:
            printf("Nhap su phan tu cua mang (tu 1-100): ");
            scanf("%d", &n);
            if (n <= 0 || n > 100) {
                printf("So phan tu không hop le!\n");
                n = 0; 
                break;
            }
            for (int i = 0; i < n; i++) {
                printf("Nhap phan tu thu %d: ", i + 1);
                scanf("%d", &mang[i]);
            }
            break;

        case 2:
            printf("Mang dã nhap: ");
            for (int i = 0; i < n; i++) {
                printf("%d ", mang[i]);
            }
            printf("\n");
            break;

        case 3:
         
    if (n < 100) {
        int phan_tu_moi;
        int vi_tri_moi;

        printf("Nhap vi tri can them (tu 0 den %d): ", n);
        scanf("%d", &vi_tri_moi);

      
        if (vi_tri_moi < 0 || vi_tri_moi > n) {
            printf("Vi tri khong hop le!\n");
            break;
        }

        printf("Nhap phan tu moi: ");
        scanf("%d", &phan_tu_moi);

       
        for (int i = n; i > vi_tri_moi; i--) {
            mang[i] = mang[i - 1];
        }

      
        mang[vi_tri_moi] = phan_tu_moi;

        
        n++;

        printf("Them phan tu thanh cong!\n");
    } else {
        printf("Mang da day!\n");
    }
    break;

        case 4:
            if (n == 0) {
                printf("Mang dang rong!\n");
                break;
            }
            int vi_tri_sua;
            printf("Nhap vi trí can sua (tu 0 den %d): ", n - 1);
            scanf("%d", &vi_tri_sua);
            if (vi_tri_sua < 0 || vi_tri_sua >= n) {
                printf("V? trí không h?p l?!\n");
                break;
            }
            printf("Nhap giá tri moi: ");
            scanf("%d", &mang[vi_tri_sua]);
            break;

        case 5:
            if (n == 0) {
                printf("Mang dang rong!\n");
                break;
            }
            int vi_tri_xoa;
            printf("Nhap vi trí can xóa (tu 0 den %d): ", n );
            scanf("%d", &vi_tri_xoa);
            if (vi_tri_xoa < 0 || vi_tri_xoa >= n) {
                printf("V? trí không h?p l?!\n");
                break;
            }
            for (int i = vi_tri_xoa; i < n - 1; i++) {
                mang[i] = mang[i + 1];
            }
            n--;
            printf("Ph?n t? dã du?c xóa!\n");
            break;

        case 6:
            printf("Goodbye!\n");
            return 0;

        default:
            printf("L?a ch?n không h?p l?. Vui lòng nh?p l?i!\n");
            break;
        }
    }

    return 0;
}
