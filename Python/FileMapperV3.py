import os
from datetime import datetime
# running this in a directory will create a txt file with the path to the file you want
# you can then use grep on that txt file to find paths or you can open the file and use
# ctrl + 'f'

def get_file_type(filename):
    _, ext = os.path.splitext(filename)
    return ext[1:] if ext else "No Extension"

def create_file_structure_text(root_dir, output_file):
    with open(output_file, 'w') as file:
        for dirpath, _, filenames in os.walk(root_dir):
            for filename in filenames:
                file_type = get_file_type(filename)
                full_path = os.path.relpath(os.path.join(dirpath, filename), root_dir)
                file.write(f"{full_path} ({file_type})\n")

now = datetime.now()
timestamp = now.strftime("%Y-%m-%d_%H-%M-%S")

if __name__ == "__main__":
    root_directory = os.getcwd()  # Current working directory
    output_filename = 'File Directory as of ' + timestamp + '.txt'
    create_file_structure_text(root_directory, output_filename)

# version 2, created by Dillon Kennamer with help from chatgpt and the internet
# version 3 added date and time to the filename, for tracking of versions


