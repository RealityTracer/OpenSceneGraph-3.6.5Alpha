INCLUDE(OsgMacroUtils)

SET(TARGET_SRC
    DeprecatedGeometry.cpp
    ConvertToInventor.cpp
    ConvertFromInventor.cpp
    PendulumCallback.cpp
    ReaderWriterIV.cpp
    ShuttleCallback.cpp
)
SET(TARGET_HDRS
    DeprecatedGeometry.h
    ConvertToInventor.h
    ConvertFromInventor.h
    PendulumCallback.h
    ReaderWriterIV.h
    ShuttleCallback.h
)

SET(TARGET_ADDED_LIBRARIES Coin::Coin)

SETUP_PLUGIN(iv iv)
