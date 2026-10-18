#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/JSONCppSchemaReaderBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace cereal {

class StrictJSONCppSchemaReader : public ::cereal::JSONCppSchemaReaderBase {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    StrictJSONCppSchemaReader();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StrictJSONCppSchemaReader();
#else // @header-generator platform
    virtual bool _allowAsBool() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _allowAsBool();
#else // @header-generator platform
    virtual bool _allowAsInt8() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _allowAsInt8();
#else // @header-generator platform
    virtual bool _allowAsUInt8() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _allowAsUInt8();
#else // @header-generator platform
    virtual bool _allowAsInt16() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _allowAsInt16();
#else // @header-generator platform
    virtual bool _allowAsUInt16() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _allowAsUInt16();
#else // @header-generator platform
    virtual bool _allowAsInt32() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _allowAsInt32();
#else // @header-generator platform
    virtual bool _allowAsUInt32() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _allowAsUInt32();
#else // @header-generator platform
    virtual bool _allowAsInt64() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _allowAsInt64();
#else // @header-generator platform
    virtual bool _allowAsUInt64() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _allowAsUInt64();
#else // @header-generator platform
    virtual bool _allowAsFloat() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _allowAsFloat();

    virtual bool _allowAsDouble();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StrictJSONCppSchemaReader(std::string const&);

    MCNAPI explicit StrictJSONCppSchemaReader(std::reference_wrapper<const Json::Value>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(std::reference_wrapper<const Json::Value>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool _allowAsDouble() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowAsBool();
#else // @header-generator platform
    MCAPI bool $_allowAsBool();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowAsInt8();
#else // @header-generator platform
    MCAPI bool $_allowAsInt8();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowAsUInt8();
#else // @header-generator platform
    MCAPI bool $_allowAsUInt8();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowAsInt16();
#else // @header-generator platform
    MCAPI bool $_allowAsInt16();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowAsUInt16();
#else // @header-generator platform
    MCAPI bool $_allowAsUInt16();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowAsInt32();
#else // @header-generator platform
    MCAPI bool $_allowAsInt32();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowAsUInt32();
#else // @header-generator platform
    MCAPI bool $_allowAsUInt32();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowAsInt64();
#else // @header-generator platform
    MCAPI bool $_allowAsInt64();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowAsUInt64();
#else // @header-generator platform
    MCAPI bool $_allowAsUInt64();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowAsFloat();
#else // @header-generator platform
    MCFOLD bool $_allowAsFloat();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_allowAsDouble();
#else // @header-generator platform
    MCFOLD bool $_allowAsDouble();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
