obj-$(CONFIG_CRYPTO_DEV_QCOM_MSM_QCE) += qce50.o
qcedevice-objs := qcedev_smmu.o qcedev.o
obj-$(CONFIG_CRYPTO_DEV_QCEDEV) += qcedevice.o
obj-$(CONFIG_CRYPTO_DEV_QCRYPTO) += qcrypto.o
obj-$(CONFIG_CRYPTO_DEV_OTA_CRYPTO) += ota_crypto.o
obj-$(CONFIG_CRYPTO_DEV_QCOM_ICE) += ice.o

# TODO: remove me b/62058353
subdir-ccflags-y += \
	-Wno-ignored-attributes \
	$(call cc-option,-Wno-frame-larger-than=) \
