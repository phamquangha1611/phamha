
#include <stdio.h>
typedef struct hoc_sinh {
	char* ten;
	int tuoi;
	float diem_toan;
	float diem_van;
	float diem_trung_binh;
	float xep_loai;

}hoc_sinh_t;
hoc_sinh_t DiemTBvaXepLoai(hoc_sinh_t* mang_hs, int so_luong) {
	float diemtb = 0;
	for (int i = 0; i < so_luong;i++) {
		diemtb = (float)(mang_hs[i].diem_toan + mang_hs[i].diem_van) / 2;
		if (diemtb >= 8) {
			mang_hs[i].xep_loai = 'gioi';
		}
		else if (diemtb >= 6.5 && diemtb < 8) {
			mang_hs[i].xep_loai = 'kha';
		}
		else if (diemtb >= 5 && diemtb < 6.5) {
			mang_hs[i].xep_loai = 'tb';
		}
		else {
			mang_hs[i].xep_loai = 'yeu';
		}
	}
}

void  main() {
	hoc_sinh_t hocsinh[] = {
		{"nguyen van a",19,8,7},
		{ "nguyen van a",19,9,6 },
		{ "nguyen van a",19,5,4 },
		{ "nguyen van a",19,6.5,7 },
		{ "nguyen van a",19,8.2,7.4 },
		{ "nguyen van a",19,5.6,7.8 },
		{ "nguyen van a",19,8,4.3 },
	};
	hoc_sinh_t C = DiemTBvaXepLoai(hocsinh, 7);
	printf("diem TB va xep loai: %f/%f", C.diem_trung_binh, C.xep_loai);
}










