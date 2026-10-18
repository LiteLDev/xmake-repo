#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/ShaderPrimitiveTypes.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ShaderConstantBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                name;
    ::ll::TypedStorage<4, 4, uint>                        numberOfElements;
    ::ll::TypedStorage<4, 4, uint>                        byteOffset;
    ::ll::TypedStorage<1, 1, ::mce::ShaderPrimitiveTypes> shaderPrimitiveType;
    ::ll::TypedStorage<1, 1, bool>                        dirty;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShaderConstantBase();

    virtual void syncUniform(int, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShaderConstantBase();

    MCNAPI std::string const& getName() const;

    MCNAPI ::mce::ShaderPrimitiveTypes getType() const;

    MCNAPI void setDirty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $syncUniform(int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ShaderConstantBase {};
#endif // @header-generator platform

} // namespace mce
