#pragma once

#include <mkrn/math/matrix.hpp>

namespace mkrn::valve::bsp {
#if !defined(_MSC_VER)
#   pragma pack(push, 4)
#endif

/// <remarks>
/// https://developer.valvesoftware.com/wiki/Source_BSP_File_Format#Texdata
/// </remarks>
struct texdata_t
{
    math::vector4 reflectivity;           // RGB reflectivity
    std::int32_t  nameStringTableID;      // index into TexdataStringTable
    std::int32_t  width, height;          // source image
    std::int32_t  view_width, view_height;
};

#if !defined(_MSC_VER)
#   pragma pack(pop)
#endif

static_assert(sizeof(texdata_t) == 0x24);
}
