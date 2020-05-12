/* GIMP RGB C-Source image dump (qr.c) */

static const struct {
  guint  	 width;
  guint  	 height;
  guint  	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  guint8 	 pixel_data[32 * 32 * 3 + 1];
} gimp_image = {
  32, 32, 3,
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0\0\0\0\377"
  "\377\377\0\0\0\377\377\377\377\377\377\0\0\0\377\377\377\0\0\0\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377"
  "\377\377\0\0\0\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\0\0\0\377\377\377"
  "\0\0\0\0\0\0\377\377\377\377\377\377\0\0\0\0\0\0\377\377\377\377\377\377"
  "\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377"
  "\377\377\0\0\0\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\0\0\0\377\377\377"
  "\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\377"
  "\377\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0"
  "\0\377\377\377\0\0\0\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\377\377\377"
  "\0\0\0\377\377\377\0\0\0\377\377\377\377\377\377\0\0\0\0\0\0\0\0\0\377\377"
  "\377\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0"
  "\0\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377"
  "\377\377\377\377\377\0\0\0\377\377\377\0\0\0\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\0\0\0\377\377\377\0"
  "\0\0\377\377\377\0\0\0\377\377\377\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377"
  "\377\377\377\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0\377\377"
  "\377\377\377\377\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0\0\0\0\377\377\377\377"
  "\377\377\0\0\0\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\0\0\0\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\0\0\0"
  "\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377\377\377\377\377"
  "\377\0\0\0\377\377\377\377\377\377\0\0\0\0\0\0\0\0\0\377\377\377\0\0\0\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\0\0\0\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0\0\0\0\377"
  "\377\377\0\0\0\377\377\377\377\377\377\0\0\0\0\0\0\377\377\377\0\0\0\0\0"
  "\0\377\377\377\0\0\0\377\377\377\377\377\377\0\0\0\0\0\0\0\0\0\0\0\0\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\0\0\0\0\0\0\377\377\377\377\377\377\377"
  "\377\377\0\0\0\377\377\377\377\377\377\0\0\0\377\377\377\0\0\0\377\377\377"
  "\377\377\377\0\0\0\0\0\0\0\0\0\0\0\0\377\377\377\377\377\377\0\0\0\377\377"
  "\377\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\0\0\0\377\377\377\377\377\377\377\377\377\377"
  "\377\377\0\0\0\0\0\0\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\0\0\0\377"
  "\377\377\377\377\377\0\0\0\377\377\377\0\0\0\0\0\0\377\377\377\0\0\0\0\0"
  "\0\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377\377\377\0\0\0"
  "\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\0\0\0\377\377\377\377\377\377"
  "\0\0\0\377\377\377\377\377\377\377\377\377\0\0\0\0\0\0\377\377\377\0\0\0"
  "\377\377\377\377\377\377\0\0\0\377\377\377\0\0\0\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\377"
  "\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\0"
  "\0\0\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377"
  "\377\377\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\0\0\0\0\0\0\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\0\0\0\377\377\377\377\377\377\0\0\0\377\377\377\0\0\0\377\377\377"
  "\0\0\0\0\0\0\377\377\377\377\377\377\0\0\0\0\0\0\377\377\377\377\377\377"
  "\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\0\0\0"
  "\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\0\0\0\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\0\0\0\377\377\377\377\377\377\0\0\0\0\0\0\0\0\0\377"
  "\377\377\0\0\0\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\377\377"
  "\0\0\0\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\0\0\0\377\377"
  "\377\0\0\0\0\0\0\377\377\377\377\377\377\0\0\0\0\0\0\377\377\377\377\377"
  "\377\377\377\377\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\0"
  "\0\0\0\0\0\377\377\377\377\377\377\0\0\0\377\377\377\0\0\0\377\377\377\0"
  "\0\0\377\377\377\0\0\0\0\0\0\377\377\377\377\377\377\0\0\0\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0"
  "\0\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377"
  "\377\377\377\377\377\377\377\377\377\377\377\0\0\0\0\0\0\377\377\377\377"
  "\377\377\377\377\377\0\0\0\377\377\377\377\377\377\377\377\377\0\0\0\0\0"
  "\0\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\0\0\0"
  "\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\377\377\377\0\0\0\377\377\377"
  "\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\0"
  "\0\0\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\377\377\377\377\377\377\377"
  "\377\377\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\0\0\0\377\377\377\0\0"
  "\0\377\377\377\0\0\0\377\377\377\0\0\0\0\0\0\0\0\0\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\377"
  "\377\0\0\0\0\0\0\0\0\0\377\377\377\0\0\0\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\0\0\0\0\0\0\377\377\377\377\377\377\377\377"
  "\377\0\0\0\377\377\377\0\0\0\377\377\377\377\377\377\0\0\0\377\377\377\0"
  "\0\0\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\0\0\0\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377"
  "\377\377\377\377\377\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\377"
  "\377\377\0\0\0\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\377\377\0\0\0\0\0\0\377\377\377"
  "\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377\377"
  "\377\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377",
};

