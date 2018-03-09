/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <media/TypeConverter.h>

namespace android {

#define MAKE_STRING_FROM_ENUM(string) { #string, string }
#define TERMINATOR { .literal = nullptr }

template <>
const OutputDeviceConverter::Table OutputDeviceConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_NONE),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_EARPIECE),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_SPEAKER),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_SPEAKER_SAFE),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_WIRED_HEADSET),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_WIRED_HEADPHONE),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_BLUETOOTH_SCO),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_BLUETOOTH_SCO_HEADSET),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_BLUETOOTH_SCO_CARKIT),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_ALL_SCO),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_BLUETOOTH_A2DP),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_BLUETOOTH_A2DP_HEADPHONES),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_BLUETOOTH_A2DP_SPEAKER),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_ALL_A2DP),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_AUX_DIGITAL),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_HDMI),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_ANLG_DOCK_HEADSET),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_DGTL_DOCK_HEADSET),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_USB_ACCESSORY),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_USB_DEVICE),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_ALL_USB),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_REMOTE_SUBMIX),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_TELEPHONY_TX),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_LINE),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_HDMI_ARC),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_SPDIF),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_FM),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_AUX_LINE),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_IP),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_BUS),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_PROXY),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_USB_HEADSET),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_HEARING_AID),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_ECHO_CANCELLER),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_DEFAULT),
    // STUB must be after DEFAULT, so the latter is picked up by toString first.
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_OUT_STUB),
    TERMINATOR
};

template <>
const InputDeviceConverter::Table InputDeviceConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_NONE),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_COMMUNICATION),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_AMBIENT),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_BUILTIN_MIC),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_BLUETOOTH_SCO_HEADSET),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_ALL_SCO),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_WIRED_HEADSET),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_AUX_DIGITAL),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_HDMI),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_TELEPHONY_RX),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_VOICE_CALL),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_BACK_MIC),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_REMOTE_SUBMIX),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_ANLG_DOCK_HEADSET),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_DGTL_DOCK_HEADSET),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_USB_ACCESSORY),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_USB_DEVICE),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_ALL_USB),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_FM_TUNER),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_TV_TUNER),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_LINE),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_SPDIF),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_BLUETOOTH_A2DP),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_LOOPBACK),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_IP),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_BUS),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_PROXY),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_USB_HEADSET),
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_DEFAULT),
    // STUB must be after DEFAULT, so the latter is picked up by toString first.
    MAKE_STRING_FROM_ENUM(AUDIO_DEVICE_IN_STUB),
    TERMINATOR
};


template <>
const OutputFlagConverter::Table OutputFlagConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_NONE),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_DIRECT),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_PRIMARY),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_FAST),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_DEEP_BUFFER),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_COMPRESS_OFFLOAD),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_NON_BLOCKING),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_HW_AV_SYNC),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_TTS),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_RAW),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_SYNC),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_IEC958_NONAUDIO),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_DIRECT_PCM),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_MMAP_NOIRQ),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_VOIP_RX),
    MAKE_STRING_FROM_ENUM(AUDIO_OUTPUT_FLAG_INCALL_MUSIC),
    TERMINATOR
};


template <>
const InputFlagConverter::Table InputFlagConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_INPUT_FLAG_NONE),
    MAKE_STRING_FROM_ENUM(AUDIO_INPUT_FLAG_FAST),
    MAKE_STRING_FROM_ENUM(AUDIO_INPUT_FLAG_HW_HOTWORD),
    MAKE_STRING_FROM_ENUM(AUDIO_INPUT_FLAG_RAW),
    MAKE_STRING_FROM_ENUM(AUDIO_INPUT_FLAG_SYNC),
    MAKE_STRING_FROM_ENUM(AUDIO_INPUT_FLAG_MMAP_NOIRQ),
    MAKE_STRING_FROM_ENUM(AUDIO_INPUT_FLAG_VOIP_TX),
    MAKE_STRING_FROM_ENUM(AUDIO_INPUT_FLAG_HW_AV_SYNC),
    TERMINATOR
};


template <>
const FormatConverter::Table FormatConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_PCM_16_BIT),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_PCM_8_BIT),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_PCM_32_BIT),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_PCM_8_24_BIT),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_PCM_FLOAT),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_PCM_24_BIT_PACKED),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_MP3),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AMR_NB),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AMR_WB),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_MAIN),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_LC),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_SSR),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_LTP),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_HE_V1),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_SCALABLE),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ERLC),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_LD),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_HE_V2),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ELD),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_XHE),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADTS_MAIN),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADTS_LC),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADTS_SSR),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADTS_LTP),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADTS_HE_V1),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADTS_SCALABLE),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADTS_ERLC),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADTS_LD),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADTS_HE_V2),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADTS_ELD),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADTS_XHE),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_VORBIS),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_HE_AAC_V1),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_HE_AAC_V2),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_OPUS),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AC3),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_E_AC3),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_DTS),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_DTS_HD),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_IEC61937),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_DOLBY_TRUEHD),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_EVRC),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_EVRCB),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_EVRCWB),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_EVRCNW),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADIF),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_WMA),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_WMA_PRO),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AMR_WB_PLUS),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_MP2),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_QCELP),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_DSD),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_FLAC),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_ALAC),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_APE),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AAC_ADTS),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_SBC),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_APTX),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_APTX_HD),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_AC4),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_LDAC),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_MAT),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_E_AC3_JOC),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_MAT_1_0),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_MAT_2_0),
    MAKE_STRING_FROM_ENUM(AUDIO_FORMAT_MAT_2_1),
    TERMINATOR
};


template <>
const OutputChannelConverter::Table OutputChannelConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_MONO),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_STEREO),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_2POINT1),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_2POINT0POINT2),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_2POINT1POINT2),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_3POINT0POINT2),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_3POINT1POINT2),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_QUAD),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_QUAD_BACK),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_QUAD_SIDE),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_SURROUND),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_PENTA),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_5POINT1),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_5POINT1_BACK),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_5POINT1_SIDE),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_6POINT1),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_OUT_7POINT1),
    TERMINATOR
};


template <>
const InputChannelConverter::Table InputChannelConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_IN_MONO),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_IN_STEREO),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_IN_FRONT_BACK),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_IN_6),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_IN_2POINT0POINT2),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_IN_2POINT1POINT2),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_IN_3POINT0POINT2),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_IN_3POINT1POINT2),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_IN_5POINT1),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_IN_VOICE_UPLINK_MONO),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_IN_VOICE_DNLINK_MONO),
    MAKE_STRING_FROM_ENUM(AUDIO_CHANNEL_IN_VOICE_CALL_MONO),
    TERMINATOR
};

template <>
const ChannelIndexConverter::Table ChannelIndexConverter::mTable[] = {
    {"AUDIO_CHANNEL_INDEX_MASK_1", static_cast<audio_channel_mask_t>(AUDIO_CHANNEL_INDEX_MASK_1)},
    {"AUDIO_CHANNEL_INDEX_MASK_2", static_cast<audio_channel_mask_t>(AUDIO_CHANNEL_INDEX_MASK_2)},
    {"AUDIO_CHANNEL_INDEX_MASK_3", static_cast<audio_channel_mask_t>(AUDIO_CHANNEL_INDEX_MASK_3)},
    {"AUDIO_CHANNEL_INDEX_MASK_4", static_cast<audio_channel_mask_t>(AUDIO_CHANNEL_INDEX_MASK_4)},
    {"AUDIO_CHANNEL_INDEX_MASK_5", static_cast<audio_channel_mask_t>(AUDIO_CHANNEL_INDEX_MASK_5)},
    {"AUDIO_CHANNEL_INDEX_MASK_6", static_cast<audio_channel_mask_t>(AUDIO_CHANNEL_INDEX_MASK_6)},
    {"AUDIO_CHANNEL_INDEX_MASK_7", static_cast<audio_channel_mask_t>(AUDIO_CHANNEL_INDEX_MASK_7)},
    {"AUDIO_CHANNEL_INDEX_MASK_8", static_cast<audio_channel_mask_t>(AUDIO_CHANNEL_INDEX_MASK_8)},
    TERMINATOR
};


template <>
const GainModeConverter::Table GainModeConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_GAIN_MODE_JOINT),
    MAKE_STRING_FROM_ENUM(AUDIO_GAIN_MODE_CHANNELS),
    MAKE_STRING_FROM_ENUM(AUDIO_GAIN_MODE_RAMP),
    TERMINATOR
};


template <>
const StreamTypeConverter::Table StreamTypeConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_VOICE_CALL),
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_SYSTEM),
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_RING),
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_MUSIC),
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_ALARM),
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_NOTIFICATION),
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_BLUETOOTH_SCO ),
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_ENFORCED_AUDIBLE),
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_DTMF),
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_TTS),
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_ACCESSIBILITY),
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_REROUTING),
    MAKE_STRING_FROM_ENUM(AUDIO_STREAM_PATCH),
    TERMINATOR
};

template<>
const AudioModeConverter::Table AudioModeConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_MODE_INVALID),
    MAKE_STRING_FROM_ENUM(AUDIO_MODE_CURRENT),
    MAKE_STRING_FROM_ENUM(AUDIO_MODE_NORMAL),
    MAKE_STRING_FROM_ENUM(AUDIO_MODE_RINGTONE),
    MAKE_STRING_FROM_ENUM(AUDIO_MODE_IN_CALL),
    MAKE_STRING_FROM_ENUM(AUDIO_MODE_IN_COMMUNICATION),
    TERMINATOR
};

template<>
const AudioContentTypeConverter::Table AudioContentTypeConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_CONTENT_TYPE_UNKNOWN),
    MAKE_STRING_FROM_ENUM(AUDIO_CONTENT_TYPE_SPEECH),
    MAKE_STRING_FROM_ENUM(AUDIO_CONTENT_TYPE_MUSIC),
    MAKE_STRING_FROM_ENUM(AUDIO_CONTENT_TYPE_MOVIE),
    MAKE_STRING_FROM_ENUM(AUDIO_CONTENT_TYPE_SONIFICATION),
    TERMINATOR
};

template <>
const UsageTypeConverter::Table UsageTypeConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_UNKNOWN),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_MEDIA),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_VOICE_COMMUNICATION),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_VOICE_COMMUNICATION_SIGNALLING),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_ALARM),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_NOTIFICATION),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_NOTIFICATION_TELEPHONY_RINGTONE),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_NOTIFICATION_COMMUNICATION_REQUEST),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_NOTIFICATION_COMMUNICATION_INSTANT),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_NOTIFICATION_COMMUNICATION_DELAYED),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_NOTIFICATION_EVENT),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_ASSISTANCE_ACCESSIBILITY),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_ASSISTANCE_NAVIGATION_GUIDANCE),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_ASSISTANCE_SONIFICATION),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_GAME),
    MAKE_STRING_FROM_ENUM(AUDIO_USAGE_VIRTUAL_SOURCE),
    TERMINATOR
};

template <>
const SourceTypeConverter::Table SourceTypeConverter::mTable[] = {
    MAKE_STRING_FROM_ENUM(AUDIO_SOURCE_DEFAULT),
    MAKE_STRING_FROM_ENUM(AUDIO_SOURCE_MIC),
    MAKE_STRING_FROM_ENUM(AUDIO_SOURCE_VOICE_UPLINK),
    MAKE_STRING_FROM_ENUM(AUDIO_SOURCE_VOICE_DOWNLINK),
    MAKE_STRING_FROM_ENUM(AUDIO_SOURCE_VOICE_CALL),
    MAKE_STRING_FROM_ENUM(AUDIO_SOURCE_CAMCORDER),
    MAKE_STRING_FROM_ENUM(AUDIO_SOURCE_VOICE_RECOGNITION),
    MAKE_STRING_FROM_ENUM(AUDIO_SOURCE_VOICE_COMMUNICATION),
    MAKE_STRING_FROM_ENUM(AUDIO_SOURCE_REMOTE_SUBMIX),
    MAKE_STRING_FROM_ENUM(AUDIO_SOURCE_UNPROCESSED),
    MAKE_STRING_FROM_ENUM(AUDIO_SOURCE_FM_TUNER),
    MAKE_STRING_FROM_ENUM(AUDIO_SOURCE_HOTWORD),
    TERMINATOR
};

template class TypeConverter<OutputDeviceTraits>;
template class TypeConverter<InputDeviceTraits>;
template class TypeConverter<OutputFlagTraits>;
template class TypeConverter<InputFlagTraits>;
template class TypeConverter<FormatTraits>;
template class TypeConverter<OutputChannelTraits>;
template class TypeConverter<InputChannelTraits>;
template class TypeConverter<ChannelIndexTraits>;
template class TypeConverter<GainModeTraits>;
template class TypeConverter<StreamTraits>;
template class TypeConverter<AudioModeTraits>;
template class TypeConverter<UsageTraits>;
template class TypeConverter<SourceTraits>;

bool deviceFromString(const std::string& literalDevice, audio_devices_t& device) {
    return InputDeviceConverter::fromString(literalDevice, device) ||
            OutputDeviceConverter::fromString(literalDevice, device);
}

bool deviceToString(audio_devices_t device, std::string& literalDevice) {
    if (device & AUDIO_DEVICE_BIT_IN) {
        return InputDeviceConverter::toString(device, literalDevice);
    } else {
        return OutputDeviceConverter::toString(device, literalDevice);
    }
}

SampleRateTraits::Collection samplingRatesFromString(
        const std::string &samplingRates, const char *del)
{
    SampleRateTraits::Collection samplingRateCollection;
    collectionFromString<SampleRateTraits>(samplingRates, samplingRateCollection, del);
    return samplingRateCollection;
}

FormatTraits::Collection formatsFromString(
        const std::string &formats, const char *del)
{
    FormatTraits::Collection formatCollection;
    FormatConverter::collectionFromString(formats, formatCollection, del);
    return formatCollection;
}

audio_format_t formatFromString(const std::string &literalFormat, audio_format_t defaultFormat)
{
    audio_format_t format;
    if (literalFormat.empty()) {
        return defaultFormat;
    }
    FormatConverter::fromString(literalFormat, format);
    return format;
}

audio_channel_mask_t channelMaskFromString(const std::string &literalChannels)
{
    audio_channel_mask_t channels;
    if (!OutputChannelConverter::fromString(literalChannels, channels) &&
            !InputChannelConverter::fromString(literalChannels, channels)) {
        return AUDIO_CHANNEL_INVALID;
    }
    return channels;
}

ChannelTraits::Collection channelMasksFromString(
        const std::string &channels, const char *del)
{
    ChannelTraits::Collection channelMaskCollection;
    OutputChannelConverter::collectionFromString(channels, channelMaskCollection, del);
    InputChannelConverter::collectionFromString(channels, channelMaskCollection, del);
    ChannelIndexConverter::collectionFromString(channels, channelMaskCollection, del);
    return channelMaskCollection;
}

InputChannelTraits::Collection inputChannelMasksFromString(
        const std::string &inChannels, const char *del)
{
    InputChannelTraits::Collection inputChannelMaskCollection;
    InputChannelConverter::collectionFromString(inChannels, inputChannelMaskCollection, del);
    ChannelIndexConverter::collectionFromString(inChannels, inputChannelMaskCollection, del);
    return inputChannelMaskCollection;
}

OutputChannelTraits::Collection outputChannelMasksFromString(
        const std::string &outChannels, const char *del)
{
    OutputChannelTraits::Collection outputChannelMaskCollection;
    OutputChannelConverter::collectionFromString(outChannels, outputChannelMaskCollection, del);
    ChannelIndexConverter::collectionFromString(outChannels, outputChannelMaskCollection, del);
    return outputChannelMaskCollection;
}

}; // namespace android
