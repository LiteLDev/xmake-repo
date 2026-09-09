#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Attrib.h"
#include "mc/external/bgfx/AttribType.h"
#include "mc/external/bgfx/RendererType.h"

namespace bgfx {

struct VertexDecl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>        m_hash;
    ::ll::TypedStorage<2, 2, ushort>      m_stride;
    ::ll::TypedStorage<2, 38, ushort[19]> m_offset;
    ::ll::TypedStorage<2, 38, ushort[19]> m_attributes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VertexDecl();

    MCNAPI ::bgfx::VertexDecl& add(::bgfx::Attrib::Enum, uchar, ::bgfx::AttribType::Enum, bool, bool);

    MCNAPI ::bgfx::VertexDecl& begin(::bgfx::RendererType::Enum);

    MCNAPI void decode(::bgfx::Attrib::Enum, uchar&, ::bgfx::AttribType::Enum&, bool&, bool&) const;

    MCNAPI void end();

    MCNAPI ::bgfx::VertexDecl& skip(uchar);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace bgfx
