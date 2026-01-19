from PIL import Image, ImageDraw, ImageFont

# Load the AES logo image
aes_logo_updated_path = "/mnt/data/AES-Spartans.png"
aes_logo_updated = Image.open(aes_logo_updated_path).convert("RGBA")

# Define the area to be edited (blanked out and replaced)
edit_box = (10, 10, 100, 50)  # Adjust these coordinates as necessary

# Create a drawing context
draw = ImageDraw.Draw(aes_logo_updated)

# Blank out the old "AES" part in the logo
draw.rectangle(edit_box, fill=(255, 255, 255, 0))  # Transparent background

# Load a font
font_path = "/path/to/your/font.ttf"  # Replace with the actual path to your font file
try:
    font_medium = ImageFont.truetype(font_path, 28)  # Adjust size as needed
except IOError:
    font_medium = ImageFont.load_default()

# Position to place "E&S" text
text_position = (15, 15)  # Adjust the position to fit correctly in the box

# Draw the new text "E&S" on the logo
draw.text(text_position, "E&S", fill="black", font=font_medium)

# Save the corrected AES logo
corrected_aes_logo_path = "/mnt/data/Corrected_AES_Spartans_Logo.png"
aes_logo_updated.save(corrected_aes_logo_path)

print(f"Updated logo saved at: {corrected_aes_logo_path}")