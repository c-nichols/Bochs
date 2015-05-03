/////////////////////////////////////////////////////////////////////////
// $Id$
/////////////////////////////////////////////////////////////////////////
  
#define BX_CDROMD_BMAP_X 32
#define BX_CDROMD_BMAP_Y 32

static const unsigned char bx_cdromd_bmap[(BX_CONFIG_BMAP_X * BX_CONFIG_BMAP_Y)/8] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x0e, 0x00, 0x00, 0x10, 0x12, 0x00,
  0x00, 0x10, 0x12, 0x00, 0x00, 0x10, 0x12, 0x00, 0x00, 0x60, 0x0e, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x0c, 0x30, 0x00,
  0x00, 0xe2, 0x47, 0x00, 0x00, 0x19, 0x98, 0x00, 0x80, 0xe6, 0x67, 0x01,
  0x40, 0x19, 0x98, 0x02, 0x20, 0xe5, 0xa7, 0x04, 0xa0, 0x12, 0x48, 0x05,
  0x90, 0xca, 0x53, 0x09, 0x50, 0x25, 0xa4, 0x0a, 0x50, 0x15, 0xa8, 0x0a,
  0x50, 0x15, 0xa8, 0x0a, 0x50, 0x15, 0xa8, 0x0a, 0x50, 0x15, 0xa8, 0x0a,
  0x50, 0x25, 0xa4, 0x0a, 0x90, 0xca, 0x53, 0x09, 0xa0, 0x12, 0x48, 0x05,
  0x20, 0xe5, 0xa7, 0x04, 0x40, 0x19, 0x98, 0x02, 0x80, 0xe6, 0x67, 0x01,
  0x00, 0x19, 0x98, 0x00, 0x00, 0xe2, 0x47, 0x00, 0x00, 0x0c, 0x30, 0x00,
  0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char bx_cdromd_eject_bmap[(BX_CONFIG_BMAP_X * BX_CONFIG_BMAP_Y)/8] = {
  0x01, 0x00, 0x00, 0x80, 0x02, 0x60, 0x0e, 0x40, 0x04, 0x10, 0x12, 0x20,
  0x08, 0x10, 0x12, 0x10, 0x10, 0x10, 0x12, 0x08, 0x20, 0x60, 0x0e, 0x04,
  0x40, 0x00, 0x00, 0x02, 0x80, 0xf0, 0x0f, 0x01, 0x00, 0x0d, 0xb0, 0x00,
  0x00, 0xe2, 0x47, 0x00, 0x00, 0x1d, 0xb8, 0x00, 0x80, 0xee, 0x77, 0x01,
  0x40, 0x19, 0x98, 0x02, 0x20, 0xe5, 0xa7, 0x04, 0xa0, 0x52, 0x4a, 0x05,
  0x90, 0xca, 0x53, 0x09, 0x50, 0xa5, 0xa5, 0x0a, 0x50, 0x55, 0xaa, 0x0a,
  0x50, 0x35, 0xac, 0x0a, 0x50, 0x15, 0xa8, 0x0a, 0x50, 0x1d, 0xb8, 0x0a,
  0x50, 0x25, 0xa4, 0x0a, 0x90, 0xca, 0x53, 0x09, 0xa0, 0x13, 0xc8, 0x05,
  0xa0, 0xe5, 0xa7, 0x05, 0x40, 0x19, 0x98, 0x02, 0xa0, 0xe6, 0x67, 0x05,
  0x10, 0x19, 0x98, 0x08, 0x08, 0xe2, 0x47, 0x10, 0x04, 0x0c, 0x30, 0x20,
  0x02, 0xf0, 0x0f, 0x40, 0x01, 0x00, 0x00, 0x80
};
